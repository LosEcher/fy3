// Room: /d/huanggon/neishi1
inherit ROOM;

void create()
{
  set ("short", "ҩ������");
  set ("long", @LONG
һ��С����,��ǽ���ż�ֻ����,������ʮ���赤ҩ,������û�д���.
ֻ�Ǹ���ͨ�ķ���,�������˵ذ�,��һ�������Ե��ر�ɾ�,������ҩ
�̵�����,���ֵú�.
LONG);

  set("exits", ([ /* sizeof() == 1 */
"east":__DIR__"tongyaopu",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "�ذ�" : "��ذ忴����Щ�Ź�,��֪�ܲ����ƿ���.(open �ذ�).
",
]));
  setup();
}
void init()
{
   add_action("do_open","open");
}
int do_open(string arg)
{
 object ob=this_player();
   if (!arg||arg!="�ذ�") return 0;
  if (ob->query_str()<25)
  return notify_fail("�������ƶ��ذ�,����ذ���˿����.\n");
  message_vision("$N�����ƶ��ذ�,����¶��һ������.\n",ob);
  set("exits/down",__DIR__"dijiao");
  return 1;
}