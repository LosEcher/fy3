inherit ITEM;
 
void create()
{
        set_name("����������", ({ "jing1", }));
        set_weight(500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
             set("long",
                "��Ƥ���ƣ������Ѿ�����ܾ��ˡ�\n",

        );
                set("value", 0);
                set("material", "silk");
                set("skill", ([
                        "name":       "unarmed",
		"exp_required":100000,
                        "gin_cost":  15,
                        "difficulty": 20,
                        "max_skill":  200
                ]) );
        }
}
