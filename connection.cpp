#include "connection.h"

Connection::Connection()
{
}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_Projet2A");
db.setUserName("essia");//inserer nom de l'utilisateur
db.setPassword("esya");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;

    return  test;
}
void Connection::closeconnection(){
    db.close();
}

