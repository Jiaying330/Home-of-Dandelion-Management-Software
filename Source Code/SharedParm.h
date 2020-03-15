#pragma once

#define ADMIN_PASSWORD "H*#dhOSjd2nCN@j6854!"
#define INIT_ADMIN_PASSWORD "khic56178"

#define DB_RAW_PATH_FOR_RESET_DB "data.db"
#define DB_RAW_PATH "data.db"
#define DB_PATH "Data Source=" + DB_RAW_PATH

#define CREATE_ADM_DB "CREATE TABLE IF NOT EXISTS Admin ( Password TEXT );"
#define CREATE_TEC_DB "CREATE TABLE IF NOT EXISTS Teacher ( Id TEXT primary key, Name TEXT, Gender TEXT, Attribution TEXT, Leader TEXT, LeaderPhone TEXT, Phone TEXT, AltPhone TEXT, Address TEXT, StfId TEXT, FOREIGN KEY(StfId) REFERENCES Staff(Id) );"
#define CREATE_CRS_DB "CREATE TABLE IF NOT EXISTS Course ( Id TEXT primary key, Name TEXT, Abstract TEXT, Date TEXT, TecId TEXT, FOREIGN KEY(TecId) REFERENCES Teacher(Id) )";
#define CREATE_STD_DB "CREATE TABLE IF NOT EXISTS Student ( Id TEXT primary key, Name TEXT, Gender TEXT, Attribution TEXT, Leader TEXT, LeaderPhone TEXT, Phone TEXT, AltPhone TEXT, Address TEXT, StfId TEXT, FOREIGN KEY(StfId) REFERENCES Staff(Id) );"
#define CREATE_STF_DB "CREATE TABLE IF NOT EXISTS Staff ( Id TEXT primary key, Name TEXT, Gender TEXT, Birthday TEXT, Job TEXT, JobDescription TEXT, Phone TEXT, AltPhone TEXT, Address TEXT, EduExp TEXT, WorExp TEXT );"
#define CREATE_COM_DB "CREATE TABLE IF NOT EXISTS Comment ( Id INT primary key, StfId TEXT, Year TEXT, Comment TEXT, FOREIGN KEY(StfId) REFERENCES Staff(Id) );"
#define CREATE_GRD_DB "CREATE TABLE IF NOT EXISTS Grade ( Id INT primary key, CrsId TEXT, TecId TEXT, StdId TEXT, Grd INT, FOREIGN KEY(CrsId) REFERENCES Course(Id), FOREIGN KEY(TecId) REFERENCES Teacher(Id), FOREIGN KEY(StdId) REFERENCES Student(Id) );"
#define CREATE_FED_DB "CREATE TABLE IF NOT EXISTS Feedback ( Id INT primary key, StdId TEXT, CrsId TEXT, CrsComment TEXT, TecComment TEXT, FOREIGN KEY(StdId) REFERENCES Student(Id), FOREIGN KEY(CrsId) REFERENCES Course(Id) );"
#define CREATE_SUP_DB "CREATE TABLE IF NOT EXISTS Support ( Id INT primary key, TecId TEXT, Action TEXT, FOREIGN KEY(TecId) REFERENCES Teacher(Id) );"
#define CREATE_REC_DB "CREATE TABLE IF NOT EXISTS Record ( Id INT primary key, StdId TEXT, Action TEXT, FOREIGN KEY(StdId) REFERENCES Student(Id) );"

#define DROP_ADM_DB "DROP TABLE IF EXISTS Admin;"
#define DROP_CRS_DB "DROP TABLE IF EXISTS Course;"
#define DROP_TEC_DB "DROP TABLE IF EXISTS Teacher;"
#define DROP_STD_DB "DROP TABLE IF EXISTS Student;"
#define DROP_STF_DB "DROP TABLE IF EXISTS Staff;"
#define DROP_COM_DB "DROP TABLE IF EXISTS Comment;"
#define DROP_GRD_DB "DROP TABLE IF EXISTS Grade;"
#define DROP_FED_DB "DROP TABLE IF EXISTS Feedback;"
#define DROP_SUP_DB "DROP TABLE IF EXISTS Support;"
#define DROP_REC_DB "DROP TABLE IF EXISTS Record;"

#define GET_PASSWORD "SELECT Password FROM Admin;"
#define STD_SELECT_ALL "SELECT Id AS 'ѧ�����', Name AS '����', Gender AS '�Ա�', Attribution AS '��������', Leader AS '������', LeaderPhone AS '�����˵绰', Phone AS '��ϵ��ʽ', AltPhone AS '������ϵ��ʽ', Address AS '��ͥסַ' FROM Student ORDER BY Id ASC"
#define TEC_SELECT_ALL "SELECT Id AS '��ʦ���', Name AS '����', Gender AS '�Ա�', Attribution AS '��������', Leader AS '������', LeaderPhone AS '�����˵绰', Phone AS '��ϵ��ʽ', AltPhone AS '������ϵ��ʽ', Address AS '��ͥסַ' FROM Teacher ORDER BY Id ASC"
#define CRS_SELECT_ALL "SELECT Course.Id AS '�γ̱��', Course.Name AS '�γ�����', Course.Date AS '�ڿ�ʱ��',  Course.Abstract AS '�γ̹���', Course.TecId AS '��ʦ���', Teacher.Name AS '��ʦ����', ifnull(G.c, 0) AS '��������' FROM Teacher, (Course LEFT JOIN(SELECT CrsId, COUNT(Grade.Id) AS c FROM Grade GROUP BY CrsId) AS G ON G.CrsId = Course.Id) WHERE Teacher.Id = Course.TecId GROUP BY Course.Id ORDER BY Course.Id ASC"
#define SUP_SELECT_ALL "SELECT Support.Id AS '��¼���', TecId AS '��ʦ���', Name AS '��ʦ����', Action AS '��¼����' FROM Support, Teacher WHERE Support.TecId = Teacher.Id ORDER BY Support.Id ASC"
#define REC_SELECT_ALL "SELECT Record.Id AS '��¼���', StdId AS 'ѧ�����', Name AS 'ѧ������', Action AS '��¼����' FROM Record, Student WHERE Record.StdId = Student.Id ORDER BY Record.Id ASC"
#define STF_SELECT_ALL "SELECT Id AS 'Ա�����', Name AS 'Ա������', Gender AS '�Ա�', Birthday AS '��������', Job AS '����ְ��', JobDescription AS 'ְλ����', Phone AS '��ϵ��ʽ', AltPhone AS '������ϵ��ʽ', Address AS '��ͥ��ַ', EduExp AS '��������', WorExp AS '��������' FROM Staff ORDER BY Id ASC"