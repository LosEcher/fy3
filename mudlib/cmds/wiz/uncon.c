inherit F_CLEAN_UP;
 
int main(object me, string arg)
{
        object ob;
        if (!arg) return notify_fail("指令格式: smash <living>\n");
        ob = present(arg, environment(me));
        if (!ob) return notify_fail("找不到这个生物。\n");
        message_vision("$N大手一挥，$n应声摔倒在地上！！\n",me,ob);
        ob -> unconcious();
        return 1;
}
