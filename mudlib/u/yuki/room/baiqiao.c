// Room: /u/yuki/room/baiqiao.c

inherit ROOM;

void create()
{
	set("short", "С����");
	set("long", @LONG
һ���ð�ʯ���ɵ�С�ţ�����ں����ϣ�С��������������
�Ե�����ʱ������趯��ˮ�浴�����۲�������������������
����ͷ����Լ�ƻ��ľ�����һ������ͨ�ĵĺõط����м�����
Ů��������Ϸ��
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  "/u/yuki/npc/nvhai" : 3,
]));
	set("exits", ([ /* sizeof() == 2 */
  "westup" : __DIR__"xiaolu",
  "northeast" : __DIR__"meihuating",
]));

	setup();
	replace_program(ROOM);
}
