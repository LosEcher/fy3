// 

inherit ITEM;

void create()
{
	set_name("����",({"li","shu","book"}));
        set_weight(100);
        set("unit", "��");
        set("long",
		"һ����������Ļ��ĺ��顣\n"
             );
	set("value",1500);
        set("skill", ([
		"name":"literate",
		"max_skill":30,
        ]) );
}
 
