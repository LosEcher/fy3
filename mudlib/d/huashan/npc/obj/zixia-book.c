// force_book.c �ڹ��ķ�

inherit ITEM;

void create()
{
        set_name("��ϼ�ؼ�", ({ "shu", "book" }));
        set_weight(600);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "����һ����װ�飬������������Ļ��˲��ٴ������ŵ�����,�ǻ�ɽ�ɵĲ����ؼ���\n");
                set("value", 500);
		set("no_sell",1);
	        set("no_get_from",1);
		set("no_give",1);
                set("material", "paper");
                set("skill", ([
                        "name": "zixia-shengong",        // name of the skill
                        "exp_required": 50000,      // minimum combat experience required
			"sen_cost":20+random(20),
                        "max_skill":60,
                ]) );
        }
}
