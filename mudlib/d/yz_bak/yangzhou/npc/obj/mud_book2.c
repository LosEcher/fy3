// 

inherit ITEM;

void create()
{
        set_name("�����µ��ߵĹ��¡�", ({"sky gushi","gushi", "story" }));
        set_weight(100);
        set("unit", "��");
        set("long",
                
                "���µ��ߵĹ��£�����Ȥ�Ļ��ɶ�(read)һ��.\n"
             );
        set("value", 10);
        set("skill", ([
                "name":                 "dodge",         
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
	this_player()->start_more(read_file(__DIR__"story/sky.mud"));
	return 1;
}
