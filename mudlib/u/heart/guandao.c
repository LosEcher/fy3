// Room: /u/viviran/guandao.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
����ͨ�������Ĺٵ���������˵��һƬ���ָ�Ϊ
���С��ٵ���������һ�������Ժ���Ǿ�����ν������
Ժ������Ե�ͷ���Сʱ�����ĵط����������Ѿ�����
������������һ��С�ţ�����С�žͿ��Ե�������ˡ�
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"feiyu",
  "northwest" : __DIR__"huayuan",
  "south" : __DIR__"shiqiao",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
