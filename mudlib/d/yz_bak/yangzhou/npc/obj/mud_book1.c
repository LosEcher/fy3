// 

inherit ITEM;

void create()
{
        set_name("��С浵Ĺ��¡�", ({"xiaoxian gushi","gushi", "story" }));
        set_weight(100);
        set("unit", "��");
        set("long",
                
                "С浵Ĺ��£�����Ȥ�Ļ��ɶ�(read)һ��.\n"
             );
        set("value", 10);
        set("skill", ([
                "name":                 "force",         
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
	this_player()->start_more(read_file(__DIR__"story/priscila.mud"));
	return 1;
}
