#include "Sculptor.h"

int main(void){
  Sculptor teste(50,50,50);

  //Quadrado branco
  teste.setColor(1,1,1,1);
  teste.putBox(0 ,20, 0,10, 0, 20);

  //Quadrado verde
  teste.setColor(0,1,0,1);
  teste.putBox(0,20,10,40,0,20);

  
  teste.setColor(0.8,0.8,0.8,1);
  teste.putBox(7,13,40,43,7,13);
  //Preto do olho
  teste.setColor(0, 0, 0, 1);
  teste.putEllipsoid(5, 31, 0, 3, 4, 3);
  
  teste.setColor(0, 0, 0, 1);
  teste.putEllipsoid(14, 31, 0, 3, 4, 3);


  
  // Branco do olho
  teste.setColor(1, 1, 1, 1);
  teste.putVoxel(6,31,0);
  teste.putVoxel(6,32,0);
  
  teste.putVoxel(15, 31, 0);
  teste.putVoxel(15, 32, 0);


  //boca
  teste.setColor(0,0,0,1);
  teste.putVoxel(7,23,0);
  teste.putVoxel(8,22,0);
  teste.putVoxel(9,21,0);
  teste.putVoxel(10,21,0);
  teste.putVoxel(11,22,0);
  teste.putVoxel(12,23,0);

  teste.writeOFF("teste.off");
  
}
 