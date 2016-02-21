// Room: /d/quanzhou/shengmu.c

inherit ROOM;

void create()
{
	set("short", "��˹��ʥĹ");
	set("long", @LONG
��������,��˹���̴�ʼ���º�Ĭ����λ�������˴���,��������
���ڴ˴�,��������鼣,�˴��ֳ�Ϊ'��ɽʥĹ',ĹΪ�������л�����
ʯ�����,�Ͻ��ķ���ʯͤ�ڸ�.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"caodi",
]));
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/ahong.c" : 1,
  __DIR__"npc/yisilan.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
