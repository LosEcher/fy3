// Room: /d/hangzhou/sudi.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "�յ̴���");
	set("long", @LONG
�����ڽ��µ��������̾����յ���,����֪���ն��»���20��, 
���ײ�,������,��������������ɽ����ɽ�����泤�̣���ʱ��� 
����,���Դ����峿�;�Ϊ��. 
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"baidi3.c",
  "east" : __DIR__"baidi2.c",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");

	setup();
	replace_program(ROOM);
}
