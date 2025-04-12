import sqlite3 as sq

try:
    conexao = sq.connect("./meu_banco.db")
    cursor = conexao.cursor()

    comando = '''CREATE TABLE IF NOT EXISTS Pessoa(
                cpf INTEGER NOT NULL,
                nome TEXT NOT NULL,
                nascimento DATE NOT NULL,
                oculos BOOLEN NOT NULL,
                PRIMARY KEY(cpf)
                );'''
    conexao.execute(comando)
    comando = '''CREATE TABLE IF NOT EXISTS Marca(
                id INTEGER NOT NULL,
                nome TEXT NOT NULL,
                sigla CHARACTER(2) NOT NULL,
                PRIMARY KEY (id)
                );'''
    conexao.execute(comando)
    comando = '''CREATE TABLE IF NOT EXISTS Veiculo(
                placa CHARACTER (7) NOT NULL,
                ano INTEGER NOT NULL,
                cor TEXT NOT NULL,
                proprietario INTEGER NOT NULL,
                marca INTEGER NOT NULL,
                PRIMARY KEY (placa),
                FOREIGN KEY (proprietario) REFERENCES Pessoa(cpf),
                FOREIGN KEY (marca) REFERENCES Marca(id)
                );'''
    conexao.execute(comando)

    conexao.commit()

except sq.DatabaseError as err:
    print("erro no banco de dados", err)

finally:
    if conexao:
        cursor.close()
        conexao.close()