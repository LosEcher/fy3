// Room: /d/quanzhen/houhuayuan.c

inherit ROOM;

void create()
{
	set("short", "��԰");
	set("long", @LONG
	������һ��С��԰�����ҵ����Ÿ��ֻ��ݣ��������˴�����
���Ѿ����úܸ��ˡ���һЩ��ģ��׵��ʻ������ڲݴ��У������㲻
�ϵ�Ʈ����������һ��С�ţ�������һ������С¥��
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "northwest" : __DIR__"fu-houyuan",
  "east" : __DIR__"houhuayuan1",
  "south" : __DIR__"guanjinglou",
]));

	setup();
set("outdoors","/d/quanzhen");
	replace_program(ROOM);
}
