// Room: /u/oldsix/room2/dalao1.c

inherit ROOM;

void create()
{
	set("short","���ݸ�����");
	set("long", @LONG
����ר�Ź�Ѻ��Ʀ��å�Ĵ��Ρ����ڰ��಻����������һ��ľͰ��Ҳ��֪
װ��ʲô��ɢ��������������ʱ�м�ֻ��ͷӬ�ɽ��ɳ���������ֻ����һ��
�£��Ǿ��ǸϽ��뿪�����ط���
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"shenxun",
]));
	set("no_clean_up", 0);
	set("no_fight",1);
	set("no_magic",1);
	set("no_steal",1);
	setup();
	replace_program(ROOM);
}
