// Room: /d/huanggon/shilaoxiaotang
inherit ROOM;

void create()
{
  set ("short", "ʯ��С��");
  set ("long", @LONG
ʯ���ڵ�һ��С��,�����ʯ�ڼ�Ϊ��ʵ,����ǽ���Ͽ��˸�����.��
�洫������������,�����������������,��˵��Ѻ�ľ���Ȩ�㵱���İ�
����.������������.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"shilaozoulang",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "����" : "��������������,������������ܶϿ���.
",
]));
  setup();
}
void init()
{
  add_action("do_kan","kan");
}
int do_kan(string arg)
{
  object ob,inv;
  if (!arg||arg!="����") return notify_fail("��Ҫ��ʲô?\n");
  ob=this_player();
  if (!present("yitian jian",ob)&&!present("tulong dao",ob))
  return notify_fail("�㿳��һ���ϵ�����,����ûʲô��ɫ.\n");
  if (present("yitian jian",ob))  {
  message_vision("$Nȡ�����콣,�������ϵ�����һһ����,ǽ��
 ���˸������,�����ܽ�ȥ��.\n",ob);
  set("exits/down",__DIR__"shilaonei");
  ob->set_temp("aobai",1);
  return 1;
 }
 if (present("tulong dao",ob))  {
  message_vision("$Nȡ��������,�Դ����ϵ�����һ������,
 �������Ͽ��˸������,�����ܽ���.\n",ob);
  set("exits/down",__DIR__"shilaonei");
  ob->set_temp("aobai",1);
  return 1;
 }
 return 1;
}