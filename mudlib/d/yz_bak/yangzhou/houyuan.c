// Room: /d/yangzhou/houyuan.c

inherit ROOM;

void create()
{
	set("short", "���¾�¥�ĺ�Ժ");
	set("long", @LONG
	���������¾�¥�ĺ�Ժ��һ��ֻ���Ƶ��Լ�����Ϣ�ã�����
����ס��Щ������ĺ������ˣ�Ҳ���ǾƵ�������ˣ������������
Ҳһ�򽻺ã�����æ��Щ���������

LONG
	);
	set("no_fight", 1);
	set("sleep_room", 1);
	set("objects", ([ ]));
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"startroom",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
