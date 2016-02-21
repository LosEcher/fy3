// Room: /d/zhongzhou/wendingnan3.c

inherit ROOM;

void create()
{
	set("short", "�Ķ��Ͻ�");
	set("long", @LONG
�������ݳ��Ķ��Ͻ֣����Ľֵ������˲�������һ����������һ��
��С�ķ��ӣ���������С�����ų����˵�΢Ц���ſ�������д����������
�ĸ����֡��϶���һ�����ɵĺõط��������������ں�����С��ͬ��
LONG
	);
	set("outdoors", "/d/zhongzhou");
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/man.c" : 2,
]));
	set("exits", ([ /* sizeof() == 5 */
  "south" : __DIR__"wendingnan4",
  "northeast" : __DIR__"hutong",
  "east" : __DIR__"nameroom",
  "west" : __DIR__"xiuxian",
  "north" : __DIR__"wendingnan2",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
