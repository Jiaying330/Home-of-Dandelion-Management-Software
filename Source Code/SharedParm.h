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
#define STD_SELECT_ALL "SELECT Id AS '学生编号', Name AS '姓名', Gender AS '性别', Attribution AS '所属堂区', Leader AS '负责人', LeaderPhone AS '负责人电话', Phone AS '联系方式', AltPhone AS '其他联系方式', Address AS '家庭住址' FROM Student ORDER BY Id ASC"
#define TEC_SELECT_ALL "SELECT Id AS '教师编号', Name AS '姓名', Gender AS '性别', Attribution AS '所属团体', Leader AS '负责人', LeaderPhone AS '负责人电话', Phone AS '联系方式', AltPhone AS '其他联系方式', Address AS '家庭住址' FROM Teacher ORDER BY Id ASC"
#define CRS_SELECT_ALL "SELECT Course.Id AS '课程编号', Course.Name AS '课程名称', Course.Date AS '授课时间',  Course.Abstract AS '课程梗概', Course.TecId AS '教师编号', Teacher.Name AS '教师姓名', ifnull(G.c, 0) AS '参与人数' FROM Teacher, (Course LEFT JOIN(SELECT CrsId, COUNT(Grade.Id) AS c FROM Grade GROUP BY CrsId) AS G ON G.CrsId = Course.Id) WHERE Teacher.Id = Course.TecId GROUP BY Course.Id ORDER BY Course.Id ASC"
#define SUP_SELECT_ALL "SELECT Support.Id AS '记录编号', TecId AS '教师编号', Name AS '教师姓名', Action AS '记录内容' FROM Support, Teacher WHERE Support.TecId = Teacher.Id ORDER BY Support.Id ASC"
#define REC_SELECT_ALL "SELECT Record.Id AS '记录编号', StdId AS '学生编号', Name AS '学生姓名', Action AS '记录内容' FROM Record, Student WHERE Record.StdId = Student.Id ORDER BY Record.Id ASC"
#define STF_SELECT_ALL "SELECT Id AS '员工编号', Name AS '员工姓名', Gender AS '性别', Birthday AS '出生日期', Job AS '工作职务', JobDescription AS '职位介绍', Phone AS '联系方式', AltPhone AS '其他联系方式', Address AS '家庭地址', EduExp AS '教育经历', WorExp AS '工作经历' FROM Staff ORDER BY Id ASC"