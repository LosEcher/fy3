inherit ITEM;
void create()
{
  set_name("����ʮ���¾���", ({"book" }));
        set_weight(100);
        set("unit", "��");
        set("long","��������԰ױߵ�һ������,��Ѱ����
�е�Ҫ������,������Ļ�,���Զ�һ��(read).\n");
        set("value", 1000);
        set("skill", ([
                "name":"literate",         
                "exp_required": 0,                             
                "sen_cost":     20,                            
                "difficulty":   20,     
                "max_skill":    20 
        ]) );
}
void init()
{
        add_action("do_read", "read");
}
int do_read(string arg)
{
        this_player()->start_more(read_file(__DIR__"42book"));
        return 1;
}
