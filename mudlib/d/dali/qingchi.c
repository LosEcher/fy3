// Room: /d/dali/qingchi.c

inherit ROOM;

void create()
{
	set("short", "���");
	set("long", @LONG
�������������ܵ��������е��徻����ؽ�����گ��䣬������
�����ڴ���԰�ֹ����İ����£������˲ʡ�������Ϻ��浹Ҳ���˲�
�٣������ļ��紺�������£��ɻ�˯���ޱ���次�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"pengfu",
  "east" : __DIR__"sheguta",
]));
	set("outdoors", "dali");

	setup();
	replace_program(ROOM);
}
