// Room: /d/huashan/shaluo.c

inherit ROOM;

void create()
{
	set("short", "ɯ��ƺ");
	set("long", @LONG
������Ȫ��̤������ʯ������ɽ�����ζ��ϣ���������ɯ��ƺ������
��ɽ·��ʼ���ͣ�����һ���ػ�������ɽ����������ʮ���̡���ͨ��ɽ�ϡ�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xx");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/haoke" : 2,
]));
	set("exits", ([ /* sizeof() == 3 */
  "southup" : __DIR__"qingke",
  "northeast" : __DIR__"shanhongpb",
  "northwest" : __DIR__"path1",
]));

	setup();
	replace_program(ROOM);
}
