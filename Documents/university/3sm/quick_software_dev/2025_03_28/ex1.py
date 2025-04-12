import sqlite3 as sq

try:
    conexao = sq.connect("./meu_banco.db")
    cursor = conexao.cursor()

    comando = '''CREATE TABLE IF NOT EXISTS Aluno(
                nome TEXT NOT NULL,
                matricula INTEGER NOT NULL,
                PRIMARY KEY(matricula)
                );'''
    conexao.execute(comando)
    
    comando = '''CREATE TABLE IF NOT EXISTS Disciplina(
                codigo TEXT NOT NULL,
                nome TEXT NOT NULL,
                PRIMARY KEY (codigo)
                );'''
    conexao.execute(comando)

    comando = '''CREATE TABLE IF NOT EXISTS Inscricao(
                aluno TEXT NOT NULL,
                disciplina TEXT NOT NULL,
                ano INTEGER NOT NULL,
                semestre INTEGER NOT NULL,
                sm1 FLOAT,
                sm2 FLOAT,
                av FLOAT,
                nf FLOAT,
                PRIMARY KEY(aluno, disciplina, ano, semestre),
                FOREIGN KEY(aluno) REFERENCES Aluno(matricula),
                FOREIGN KEY(disciplina) REFERENCES Disciplina(codigo)
                );'''
    
    conexao.execute(comando)

    conexao.commit()

except sq.DatabaseError as err:
    print("erro no banco de dados", err)

finally:
    if conexao:
        cursor.close()
        conexao.close()

