// Room: /d/huanggon/lianxishi.c

inherit ROOM;

void create()
{
	set("short", "��ϰ��");
	set("long", @LONG
�������пտն���,ǽ�ڱ����ż���ţƤ������,���ϴ�������ֻ��
���������ƺ�װ���������ɳ���������ֻһ�����ӣ���ǰ���ſ����,
���ϰ���ʮ���̵���.�ƺ��ձ��˶���.
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"yuhuayuan1",
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 4 */
  __DIR__"obj/qiancenggao.c" : 1,
  __DIR__"obj/roushaobin.c" : 1,
  __DIR__"obj/wandouhuang.c" : 1,
  __DIR__"obj/xiaoshaomai.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
