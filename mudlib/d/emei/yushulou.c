// Room: /d/emei/yushulou.c

inherit ROOM;

void create()
{
	set("short", "����¥");
	set("long", @LONG
¥�����,��������,�˴����ղ�������������ī��������,����
����¥,¥����һ��ʯ������,רΪ���٤�����ٴ�¥����,����Ϊ��
����,������ˮ����,��������.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/ling.c" : 1,
  __DIR__"npc/li.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"ligouyuan",
]));

	setup();
	replace_program(ROOM);
}
