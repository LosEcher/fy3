// 

inherit ITEM;

void create()
{
	set_name("��ʫ��",({"shi","shu","book"}));
        set_weight(100);
        set("unit", "��");
        set("long",
		"һ����������Ļ��ĺ��顣\n"
             );
	set("value",500);
        set("skill", ([
		"name":"literate",
		"max_skill":10,
        ]) );
}
 
