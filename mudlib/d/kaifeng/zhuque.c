// Room: /d/kaifeng/zhuque.c

inherit ROOM;

void create()
{
	set("short", "��ȸ��");
	set("long", @LONG
�����ڳǵĳ��ţ��ߴ�ĳ�ǽ�ô���ש�ֺ���֭���ɣ�ʱ��ĳ�
ˢʹ��ǽש��Ϊ����ɫ�����������ǽ�¥�����治Զ�����Ǵ����
�µİ˱������
LONG
	);
set("valid_startroom",1);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/guanbing.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"road",
  "north" : __DIR__"road2",
  "westup" : __DIR__"jiaolou",
  "eastup" : __DIR__"jiaolou2",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
