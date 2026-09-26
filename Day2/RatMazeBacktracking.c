//rat in a maze problem using backtracking

#include <stdio.h>
#define N 4

int findpath(int maze[N][N], int x, int y, char path[], int index) {
    if (x == N - 1 && y == N - 1) {
        path[index] = '\0';
        printf("%s\n", path);
    }
    if (x >= N || y >= N || maze[x][y] == 0) {
        return 0;
    }
    maze[x][y]=0;
    //Down
    path[index]='D';
    if(findpath(maze,x+1,y,path,index+1)){
        return 1;
    }
    //Right
    path[index]='R';
    if(findpath(maze,x,y+1,path,index+1)){
        return 1;
    }
    //backtrack
    maze[x][y]=1;
    return 0;
}

int main(){
    int maze[N][N] = {
        {1,0,0,0},
        {1,1,0,1},
        {0,1,0,0},
        {1,1,1,1}
    };
    char path[N*N];
    findpath(maze,0,0,path,0);
    return 0;
}
   