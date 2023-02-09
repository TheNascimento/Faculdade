//Exercício 1
// Tiago Nascimento, RA: 12359, 6º Período

void pontoMedioCurvas (int valor) {
	int x, y, decisao;
	x = 0;
	y = valor;
	decisao = 1 - valor;
	Simetria8 (x, y);
	
	while (y > x) {
		if (d < 0) {
			d = d + 2 * x + 3;
			x++;
		} else {
			d = d + 2 * (x -y) + 5;
			x++;
			y--;
		}
		CirclePoints(x, y, color); 
	}
}
