// Room: /d/dali/cangshan.c

inherit ROOM;

void create()
{
	set("short", "��ɽ");
	set("long", @LONG
��ɽ֮��ʢ����ʯ�����ƴ���ʯ���������ʯ����ʯ����ʯ��ʯ
��ϸ�壬ɫ�ʷḻ���вʻ���ˮī�����ҡ�ѩ�׵�Ʒ�֡�ˮī��Ϊϡ
�У��ʻ������ص㣬��������������ͣ�������ɽ������������֮�Σ�
��̬��ǧ��������ɣ�Ϊ������������ʯ�Ǿ����Ľ������ϣ�������
ǽ�̵أ����������������ˮ������������ѩ��ʯ������԰��񣬾�
Ө�ɰ��������֬���ǵ�̡��滭�ĺò��ϡ�ʯ���Բ��ڴ����������
�������·����ֻ�ʯ�Գƴ���ʯ��������Ҳ���ʯ���������¡�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/changshan.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "southwest" : __DIR__"xiaguan",
  "east" : __DIR__"hongsheng",
  "north" : __DIR__"shilin",
]));
	set("outdoors", "dali");

	setup();
	replace_program(ROOM);
}
