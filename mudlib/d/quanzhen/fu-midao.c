// Room: /d/quanzhen/fu-midao.c

inherit ROOM;

void create()
{
	set("short", "�ܵ�");
	set("long", @LONG
	�����Ǻ�Ա�������µ��ܵ�����˵���軧���ڽɲ����⣬��
��Ա���צ��ץ���������������ܺ�����һЩǳ��ɫ�ɵ�Ѫ�գ�����
�м�����һ������ë���Ȼ���������㲻�ɵ���Щ�������������뻹��
�Ͽ��뿪����ɡ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"obj/tielian.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "southeast" : __DIR__"fu-mishi",
]));

	setup();
	replace_program(ROOM);
}
