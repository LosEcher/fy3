// Room: /d/huanggon/zhonghedian
inherit ROOM;

void create()
{
  set ("short", "�к͵�");
  set ("long", @LONG
�к͵���һ��С�ķ���,�ʵ��糯̫�͵�,���ڴ˽���ִ�¹�Ա�ĳ�
��,Ҳ�ǻʵ۳�ϯ�ش������Ϣ�ĵط�,ÿ������һ����,���Ӻ�ũ�߾�
�͵�����,���ܼ���.�����Ǿ�����,������̫ҽԺ.
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "west" : __DIR__"taiyiyuan",
  "east" : __DIR__"junjichu",
  "south" : __DIR__"taihedian",
  "north" : __DIR__"baohedian",
]));
  setup();
  replace_program(ROOM);
}
