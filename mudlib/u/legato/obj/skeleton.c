inherit ITEM;

void create()
{
        set_name("����", ({ "skeleton" }) );
        set("long", "�⸱�����Ѿ���������ܾ��ˡ�\n");
        set("unit", "��" );
        set("big_count", 1);
        set("small_count", 1);
}
void init()
{
        add_action("do_mai", "move");
     }
int do_mai(string arg)
{
        int n;
        object ob, me = this_player();

        n = this_player()->query("force");
        if( !arg || arg != "skeleton")
        {
                write("��Ҫ�ƶ�ʲô? \n");
                return 1;
        }
        if (me->query_temp("marks/yandang") == "1")
        {
                if (n > 200 && query("small_count") == 1)
                {
                        message_vision(
"$N�����ǵ�ͷ­����İ���������ͷ­�¾�Ȼ����һ�����ӡ�\n", me);
                        ob = new(__DIR__"box");
                        ob->move(environment(me));
                        me->set_temp("marks/yandang", "2");
                        add("small_count", -1);

}
        return 1;

