struct tipoLogradouro
    {

        char tipo[80];
        char nome[80];
        char complemento[80];

    };


    void criaLinhaCSV(struct tipoLogradouro info, char linha[240])
    {

        int i=0;
        int j=0;
        while(info.tipo[j]!='\0')
        {

            linha[i]=info.tipo[j];
            i++;
            j++;

        }
        linha[i]=';';
        j=0;
        i++;
        while(info.nome[j]!='\0')
        {

            linha[i]=info.nome[j];
            i++;
            j++;

        }
        linha[i]=';';
        i++;
        j=0;
        while(info.complemento[j]!='\0')
        {

            linha[i]=info.complemento[j];
            i++;
            j++;

        }
        linha[i]='\0';
    }