// 

inherit ITEM;

void create()
{
        set_name("����ʦ�ǵĻ���", ({"wizard book","wizard", "wiz" }));
        set_weight(100);
        set("unit", "��");
        set("long",
                
                "����WIZARD���飬����Ȥ�Ļ��ɶ�(read)һ��.\n"
             );
        set("value", 10);
        set("skill", ([
                "name":                 "throwing",         
                "exp_required": 0,                             
                "sen_cost":     20,                            
                "difficulty":   20,     
// modify is gin_cost's (difficulty - int)*5%
                "max_skill":    4 
        ]) );
}
 
void init()
{
	add_action("do_read", "read");
}


int do_read(string arg)
{
	this_player()->start_more(read_file(__DIR__"story/wizard.mud"));
	return 1;
}
