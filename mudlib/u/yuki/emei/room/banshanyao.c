// Room: /u/yuki/emei/room/banshanyao.c

inherit ROOM;

void create()
{
	set("short", "��ɽ��");
	set("long", @LONG
�����Ƕ�ü��ɽ�İ�ɽ��������������ﴭ������·��
��һ��Сé���ݣ�����бб���ƺ�Ҫ���ˣ��������ó�ʱ��
��û����ס���ˡ�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"xiaolu3",
  "west" : __DIR__"maowu.c",
]));

	setup();
	replace_program(ROOM);
}
