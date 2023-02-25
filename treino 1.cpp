#include <iostream>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	string nome, modelo, portas, passageiro, bagajeiro, viagem;
	int quantidade;
	
	//Introducao
	cout << "Digite seu nome:\n";
	cin >> nome;
	
	//modelo do carro
	cout << "\n" << nome << ", escolha o modelo de seu carro: ";
	cout << "\nBMW:\nGasolina: 9.8L/km\nÁlcool: 8.9L/km";
	cout << "\nFiat:\nGasolina: 26.8L/km\nÁlcool: 24.9L/km";
	cout << "\nAudi:\nGasolina: 12.8L/km\nÁlcool: 10.9L/km";
	cout << "\nFerrari:\nGasolina: 13.8L/km\nÁlcool: 12.9L/km\n\n";
	
	cin >> modelo;
	
	while (modelo != "BMW" && modelo != "Fiat" && modelo != "Audi" && modelo != "Ferrari"){
		modelo.clear();
		cout << "\nModelo inválido, digite novamente\n";
		cin >> modelo;
	}
	
	
	//Média quilometragem 
	double precobmwgaso = 9.8;
	double precofiatgaso = 26.8;
	double precoaudigaso = 12.8;
	double precoferrarigaso = 13.8;
	
	double precobmwalc = 8.9;
	double precofiatalc = 24.9;
	double precoaudialc = 10.9;
	double precoferrarialc = 12.9;
	
	double mediagaso = 0;
	double mediaalc = 0;
	
	
	
	if (modelo == "BMW"){
	    mediagaso = precobmwgaso;
	}else if (modelo == "Fiat"){
	    mediagaso = precofiatgaso;
	}else if (modelo == "Audi"){
	    mediagaso = precoaudigaso;
	}else if (modelo == "Ferrari"){
	    mediagaso = precoferrarigaso;
	}
	
	if (modelo == "BMW"){
	    mediaalc = precobmwalc;
	}else if (modelo == "Fiat"){
	    mediaalc = precofiatalc;
	}else if (modelo == "Audi"){
	    mediaalc = precoaudialc;
	}else if (modelo == "Ferrari"){
	    mediaalc = precoferrarialc;
	}
	
	// Diminuir caso tenha portas
	cout << "\nO seu modelo de carro possui mais de quatro portas? (Responda com Sim ou Nao)\n\n";
	cin >> portas;
	
	while (portas != "Sim" && portas != "Nao"){
		portas.clear();
		cout << "\nModelo inválido, digite novamente\n";
		cin >> portas;
	}
	
	if (portas == "Sim"){
		mediagaso -= 0.5;
		mediaalc -= 0.5;
	}else if (portas == "Nao"){
	    mediagaso *= 1;
	    mediaalc *= 1;
	}
	
	
	// Diminuir caso tenha mais de 2 pessoas viajando
	cout << "\nO seu carro terá mais de 2 pessoas viajando? (Responda com Sim ou Nao) \n\n";
	cin >> viagem;
	
	while (viagem != "Sim" && viagem != "Nao"){
		viagem.clear();
		cout << "\nModelo inválido, digite novamente\n";
		cin >> viagem;
	}
	
	if (viagem == "Sim"){
		mediagaso -= 1.2;
		mediaalc -= 1.2;
	}else if (viagem == "Nao"){
	    mediagaso *= 1;
	    mediaalc *= 1;
	}
	
	
	// Diminuir caso tenha bagajeiro
	cout << "\nO seu carro terá bagajeiro? (Responda com Sim ou Nao) \n\n";
	cin >> bagajeiro;
	
	while (bagajeiro != "Sim" && bagajeiro != "Nao"){
		bagajeiro.clear();
		cout << "\nModelo inválido, digite novamente\n";
		cin >> bagajeiro;
	}
	
	if (bagajeiro == "Sim"){
		mediagaso -= 0.2;
		mediaalc -= 0.2;
	}else if (bagajeiro == "Nao"){
	    mediagaso *= 1;
	    mediaalc *= 1;
	}
	
	
	cout << "\n" << nome << ", veja o seu resultado: \n\nQuilometragem Média Gasolina: " << mediagaso << "L/Km\n";
	cout << "\nQuilometragem Média Álcool: " << mediaalc << "L/Km\n";
}
