// Room: /d/lingjiu/liangong.c

inherit ROOM;

void create()
{
	set("short", "Ϸ���");
	set("long", @LONG
���������չ����������ĵط����м�������Ů������ר�����µ�����
���м����ֳ���,�ڻ������,���鶯�����紩������һ�㣬�㲻����
�����ۣ�����������ڵ��ϵ������Ͽ���������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"changl4",
]));
	set("objects", ([ /* sizeof() == 2 */
  "/daemon/class/lingjiu/tbluan.c" : 1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
