import create_table as ct

ct.create()
def insert():
    try:
        conexao = sq.connect(".meu_banco.db")
        cursor = conexao.cursor()
        insert_aluno()
        
        def insert_aluno():
            nome = input("insira o nome do aluno")
            matricula = int(input("insira a matricula"))

            pass

        def insert_inscricao():
            pass

        def insert_disciplina():
            codigo = int(input("insira o codigo da disciplina"))
            disciplina = input("insira a disciplina")
            pass

        def remove():
            pass

    finally:
        if conexao:
            cursor.close()
            conexao.close()
insert()
