programa {
  funcao inicio() {
    inteiro maior=0,  anterior=0, i=1

    enquanto(verdadeiro){
      leia(i)
      se(i>maior){
        anterior=maior
        maior=i
      }
      escreva(maior,i, anterior)

    }
    

  }
}
