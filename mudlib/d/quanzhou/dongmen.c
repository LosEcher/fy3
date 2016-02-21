// Room: /d/quanzhou/dongmen.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
������Ȫ�ݸ��Ķ���,��Ϊ��˲�Զ����Ȫ�ݵĺ���,����װ�˵Ļ� 
�����Ʒ�ر��,���п���Ҳ�ر��һЩ,Ϊ�����̲鷽��.�Աߵĳ�ǽ��
�����Ű���(bangwen),Χ��һȦ���ڿ�. 
LONG
	);
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 1 */
  "bangwen" : "�ӽ�����,��������,�ȵ�������ȡ·��,��
�ܳ���,·��ÿ�Ű�������.
                 Ȫ�ݸ�.
",
]));
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/bing.c" : 2,
  __DIR__"npc/shoubei.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"estreet2",
  "east" : __DIR__"dalu1",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
