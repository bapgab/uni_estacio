import os

def moreop(rsp):
    print("caso deseje remover todas as notas, digite clear")
    print("caso queira apenas ler todas as notas escritas até o momento, digite read")
    print("caso queira voltar, digite back")
    rsp = input().strip()
    
    if rsp == 'read':
        readdata()
        # se ele quiser apenas ler o que já tem, chama a função ler dados
    elif rsp == 'clear':
        cleardata()
        # se o usuário quiser limpar o arquivo, chama a função limpar data
    elif rsp == 'back':
        recnote()
    elif rsp == 'clear console':
        os.system('clear')
        recnote()
        #se for digitado 'clear console' o os limpa a saída do terminal... Só para ficar bonitinho
    else:
        print("resposta inválida")
        recnote()

def recnote():
    # função usada para receber os nomes/notas
    rsp = input("deseja adicionar nota? s/n\ncaso deseje ver as outras opções, digite more\n").strip()
    if rsp == 'more':
        moreop(rsp)
        # recebe o que o usuário seleciona...
    elif rsp == 's' or rsp == 'S':
        std = input("insira o nome do aluno\n")
        note = float(input("insira a nota do aluno\n"))
        writedata(std, note)
        # se a resposta for s ou S, recebe o nome e a nota e chama a função que vai escrever no arquivo a nota
    elif rsp == 'n' or rsp == 'N':
        print("\nobrigado por usar nosso sistema")
        return 0
        # se a resposta for não, fecha o programa
    else:
        print("resposta inválida\n")
        recnote()
        # caso ele tenha rsp qualquer coisa sem sentido, chama recnote novamente

def writedata(std, note):
    with open("notes.txt", "a") as archive:
        # com a função open, vamos chamar ela de arquivo... A função open("nome_do_arquivo.extensao", "modo_de_abertura")
        archive.write(std + "\t")
        # escrevemos o nome do estudante e colocamos um espaço (\tab)
        archive.write(str(note) + "\n")
        # agora, convertemos a nota para string (não podemos anotar float diretamente) e damos um \n para a próxima variável
        print("nota adicionada com sucesso!\n")
    recnote()
    # chamando a função de ler os dados

def readdata():
    try:
        # try vai tentar rodar o que tem nele, se der qualquer erro ele vai para exceções
        with open("notes.txt", "r") as archive:
            # mesma coisa do def writedata, mas neste caso vai abrir como r (read) enquanto no outro abriu como a(append)
            for line in archive:
                # para toda a linha no arquivo
                print(line)
        recnote()
        # chamo novamente a função para caso o usuário queira falar mais notas
    except FileNotFoundError as erro:
        # exceção, caso o arquivo não seja encontrado (ou não exista) vai executar e chamar novamente a função de receber notas
        print("arquivo não existe!")
        print(erro)
        recnote()

def cleardata():
    # função feita para limpar o arquivo, deixar vazio
    with open("notes.txt", "w+") as archive:
        # abrindo o arquivo como w, ele apaga o que tinha anteriormente (isso é próprio do w). O w+ ele vai funcionar como se eu colocasse um w e um r na parte do open
        print("arquivo limpo\n")
        # avisa que o arquivo está limpo e vai chamar novamente a função de ler notas
    recnote()

# função principal
print("este é o sistema de notas do professor...\n")
recnote()
