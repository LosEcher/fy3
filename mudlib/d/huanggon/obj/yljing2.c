inherit ITEM;

void create()
{
        set_name("������",({"yunlong jing","jing","book"}));
	set_weight(200);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
                set("long","���Ǳ��ɳ½��ϱ�д�������ķ�ͼ�⡣\n");
		set("value",2500);
		set("material", "paper");
		set("skill", ([
                        "name":"yunlong-xinfa",
                        "exp_required": 0, // minimum combat experience required
			"sen_cost": 20+random(21),
			"max_skill":60,
		]) );
	}
}
