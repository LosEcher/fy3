// musix uangzhou's ����

inherit ROOM;

void create()
{
	set("short", "�ɻ�����");
	set("long", @LONG
	���������峺���׵ĺɻ����У�����ɻ�ʢ��������̲�������
��ֻ��ʹ�������Ӿ��ϴ���裬��ʱ��ȴ�������������·��š�

LONG
	);

	set("exits", ([ /* sizeof() == 1 */
//		"up" : __DIR__"hehuachi",
	]));

	set("no_fight", 1);
	set("bath_room", 1);
	set("bath_equipment", "�ɻ���");

	setup();
}

void init()
{
add_action("do_jump","jump");
add_action("do_back","back");
add_action("do_back","climb");
add_action("do_swim","swim");
add_action("do_swim","you");
}

int do_jump()
{
return 1;

}

int do_back()
{

say(this_player()->query("name")+"���ϰ�ȥ.\n");
tell_object(this_player(),"����������������˰���\n");

this_player()->move("/d/yangzhou/hehuachi");
return 1;

}

int do_swim()
{

return 1;

}
