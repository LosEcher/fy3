// 

inherit ITEM;

void create()
{
	set_name("���顷",({"shu","book"}));
        set_weight(100);
        set("unit", "��");
        set("long",
		"һ����������Ļ��ĺ��顣\n"
             );
	set("value",1000);
        set("skill", ([
		"name":"literate",
		"max_skill":20,
        ]) );
}
 
