// Room: /d/heimuya/chengdedian.c

inherit ROOM;

void create()
{
	set("short", "�ɵµ�");
	set("long", @LONG
�����������̽���ƽ�շ���ʩ��ĵط��������޴������
�������λε����򣬴��˶˸���һ��������һ��Ӣ���������ˣ�
�������𽭺��Ķ������ܵ��ͷ����ͤ�ˣ� 
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/yang" : 1,
  __DIR__"npc/dizi" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "down" : __DIR__"up4",
  "north" : __DIR__"huoting",
]));
	set("valid_startroom", 1);

	setup();
	replace_program(ROOM);
}
