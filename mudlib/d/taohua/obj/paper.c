inherit ITEM;

void create()
{
        set_name("Ѫ������", ({ "paper" }));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long",
                        
"����һ������ѪѪд��ʾ�������֣�����Ź֡��������⣡\n"
                );
                set("value", 260);
                set("material", "paper");
                set("skill", ([
                        "name":     "liangqing-xiangyi",  
                    "exp_required": 100,  
                        "sen_cost":  30, 
                      "difficulty":  20,        
                    "max_skill":  41 ,
                                                                               
                ]) );
        }
}

