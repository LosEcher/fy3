// Room: /d/quanzhen/fu-houyuan.c

inherit ROOM;

void create()
{
	set("short", "��Ժ");
	set("long", @LONG
	�����Ǻ�Ժ���ߵ��������ζ����Ũ���ˡ�����ϸһ������
�ϱ���һ��Բ���ţ��ƺ������Ǵ����ﴫ�����ġ��������������ߣ���
�Ǻ�Ա��������ˡ�
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  "/d/yandang/npc/puren.c" : 1,
  "/d/yandang/npc/yahuan.c" : 1,
]));
	set("outdoors", "/d/quanzhen");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"fu-woshi",
  "north" : __DIR__"fu-datang",
  "southeast" : __DIR__"houhuayuan",
]));

	setup();
	replace_program(ROOM);
}
