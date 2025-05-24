def exibeOpcoes():
  print("\n");
  print("0 - lampada apagada\n");
  print("1 - lampada acesa \a\n");

def acenderLampada(val):
  val = 1;
  print("\n\alampada acesa\n\7");
  return val;

def apagarLampada(val):
  val = 0;
  print("\nlampada apagada\n");
  return val;

def status(val):
  if val == 0:
    print("\n");
    print(f"atualmente, a lampada está apagada");
    print("\n");
  else:
    print("\n");
    print(f"atualmente, a lampada está acesa\a");
    print("\n");

while True:
  op = input("selecione a opção desejada\n\nop - para exibir as opções\nstatus - exibir status atual da lampada\nacender - para acender a lampada\napagar - para apagar a lampada\nsair - caso queira sair\n").lower();
  if op == 'sair':
    break;
  if op == 'op':
    val = exibeOpcoes();
  elif op == 'acender':
    val = acenderLampada(val);
  elif op == 'apagar':
    val = apagarLampada(val);
  elif op == 'status':
    status(val);
