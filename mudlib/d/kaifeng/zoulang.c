// Room: /d/kaifeng/zoulang.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���ȵĵذ�������ߣ�����ԭ�����ǲ�԰�ӣ��ԴӶ�������ס�˰���
Ƥ֮���⼸�������û�����ˡ����滹�����ȣ������и�С��ͨ����
ի������������ζ�ʹ�����Ʈ�˳�����
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"chufang2",
  "east" : __DIR__"zoulang2",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
