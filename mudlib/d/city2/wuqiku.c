
inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�����������⣬���ϰ����˸�������,������ʿ����ѡ��
LONG );
	set("exits", ([
		"east" : __DIR__"kang2",
	]));
	set("objects", ([
"/d/emei/obj/zhujian":2,
"/obj/weapon/whip":1,
"/d/obj/weapon/sword/duanjian":1,
"/obj/weapon/blade":1,
		"/d/city2/obj/fuchen" : 1,
	]));
//	set("no_clean_up", 0);
	setup();
	replace_program(ROOM);
}
