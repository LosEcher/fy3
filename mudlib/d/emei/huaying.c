// Room: /u/xxy/room/huaying.c

inherit ROOM;

void create()
{
	set("short", "��Ӱͤ");
	set("long", @LONG
����һ��С�������ͤ��,������ķ���,��������������,ͤ��
������,��������,Ϧ����ͤ������ӡ����������,����ͤ�߲ݴ���
��һ�����ʯ��(bei)��,�����������'�б�Ϧ��'.
LONG
	);
	set("no_clean_up", 0);
set("outdoors","/d/emei");
	set("item_desc", ([ /* sizeof() == 1 */
  "bei" : "����1.6��,��0.9��,������ԭ�ش��̵�'���������и���֮��'
�����ݺῪ��,���ѵõ���Ʒ.
",
]));
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"milin1.c",
  "west" : __DIR__"gate",
]));

	setup();
	replace_program(ROOM);
}
