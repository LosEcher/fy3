// pot.c
// 97.7.14 by Aug

inherit ITEM;

void create()
{
	object water;

	set_name("��ˮ��", ({ "pot" }));
//	set_max_encumbrance(180000);
	set("long", "һ��װ����ˮ�Ĵ�ˮ�ף������ڿʣ�����Ҩˮ����(drink)��\n");
	set("no_get", 1);
//	set("liquid_container", 1);
	setup();
/*
	if( clonep() ) {
		water = new("/obj/water");
		water->set_volume(100000);
		water->move(this_object());
	}
*/
}

/*
int accept_object(object me, object ob) { return 1; }

void reset()
{
object water;

if( water = present("water", this_object()) ) {
water->set_volume(100000);
}
}
*/
